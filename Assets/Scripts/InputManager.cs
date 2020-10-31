using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using System;

namespace TGOV
{
	namespace Managers
	{
		public class InputManager : MonoSingleton<InputManager>
		{
			//Keybinds

			public SteamVR_Input_Sources rightInputKeybinds = SteamVR_Input_Sources.RightHand;
			public SteamVR_Input_Sources leftInputKeybinds = SteamVR_Input_Sources.LeftHand;

			public SteamVR_Action_Vector2 playerMovementThumbstick;
			public SteamVR_Action_Boolean playerJump;
			public SteamVR_Action_Boolean playerTurnLeft;
			public SteamVR_Action_Boolean playerTurnRight;
			public SteamVR_Action_Boolean playerPickup;
			public SteamVR_Action_Boolean playerLock;
			public SteamVR_Action_Boolean playerClimb;


			/// Interaction Events

			public event playerLeftLockDelegate playerLeftLockEvent;
			public delegate void playerLeftLockDelegate();

			public event playerRightLockDelegate playerRightLockEvent;
			public delegate void playerRightLockDelegate();

			public event playerLeftPickupDelegate playerLeftPickupEvent;
			public delegate void playerLeftPickupDelegate();

			public event playerLeftDropDelegate playerLeftDropEvent;
			public delegate void playerLeftDropDelegate();

			public event playerRightPickupDelegate playerRightPickupEvent;
			public delegate void playerRightPickupDelegate();

			public event playerRightDropDelegate playerRightDropEvent;
			public delegate void playerRightDropDelegate();

			//Climbing

			public event playerLeftClimbDelegate playerLeftClimbEvent;
			public delegate void playerLeftClimbDelegate();

			public event playerLeftStopClimbDelegate playerLeftStopClimbEvent;
			public delegate void playerLeftStopClimbDelegate();

			public event playerRightClimbDelegate playerRightClimbEvent;
			public delegate void playerRightClimbDelegate();

			public event playerRightStopClimbDelegate playerRightStopClimbEvent;
			public delegate void playerRightStopClimbDelegate();


			/// Movement Events

			public event playeLocomotionDelegate playerLocomotionEvent;
			public delegate void playeLocomotionDelegate(Vector2 axis);

			public event playerJumpDelegate playerJumpEvent;
			public delegate void playerJumpDelegate();

			public event playerTurnLeftDelegate playerTurnLeftEvent;
			public delegate void playerTurnLeftDelegate();

			public event playerTurnRightDelegate playerTurnRightEvent;
			public delegate void playerTurnRightDelegate();

			//Update

			void Update()
			{
				playerClimbInput();
				playerTurnInput();
				playerLocomtionInput();
				playerJumpInput();
				playerInteractionInput();
		
			}

			//Functions

			private void playerLocomtionInput()
			{
				playerLocomotionEvent?.Invoke(playerMovementThumbstick.GetAxis(rightInputKeybinds));
			}

			private void playerJumpInput()
			{
				if (playerJump.GetStateDown(leftInputKeybinds))
				{
					playerJumpEvent?.Invoke();
				}
			}

			private void playerTurnInput()
			{
				if (playerTurnRight.GetStateDown(leftInputKeybinds))
				{
				   playerTurnRightEvent?.Invoke();
				}

				else if (playerTurnLeft.GetStateDown(leftInputKeybinds))
				{
					playerTurnLeftEvent?.Invoke();
				}
			}


			private void playerClimbInput()
			{
				if (playerClimb.GetStateDown(SteamVR_Input_Sources.RightHand)){
					
					playerRightClimbEvent?.Invoke();
				}

				if (playerClimb.GetStateUp(SteamVR_Input_Sources.RightHand)){

				   playerRightStopClimbEvent?.Invoke();
				}

				if (playerClimb.GetStateDown(SteamVR_Input_Sources.LeftHand))
				{
					playerLeftClimbEvent?.Invoke();
				}

				if (playerClimb.GetStateUp(SteamVR_Input_Sources.LeftHand))
				{
					playerLeftStopClimbEvent?.Invoke();
				}
			}

			private void playerInteractionInput()
			{
				if (playerPickup.GetStateDown(SteamVR_Input_Sources.RightHand)) {

					playerRightPickupEvent?.Invoke();
				}

				if (playerPickup.GetStateUp(SteamVR_Input_Sources.RightHand))
				{
					playerRightDropEvent?.Invoke();
				}

				if (playerPickup.GetStateDown(SteamVR_Input_Sources.LeftHand))
				{
					playerLeftPickupEvent?.Invoke();
				}

				if (playerPickup.GetStateUp(SteamVR_Input_Sources.LeftHand))
				{
					playerLeftDropEvent?.Invoke();
				}

				if (playerLock.GetStateDown(SteamVR_Input_Sources.LeftHand))
				{
					playerLeftLockEvent?.Invoke();
				}

				if (playerLock.GetStateDown(SteamVR_Input_Sources.RightHand))
				{
					playerRightLockEvent?.Invoke();
				}
			}

		}
	}
}
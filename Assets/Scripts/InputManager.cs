using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using System;

namespace TGOV
{

	namespace Managers
	{
		public class InputManager : Singleton<InputManager>
		{
			//Keybinds

			public SteamVR_Input_Sources rightInputKeybinds = SteamVR_Input_Sources.RightHand;
			public SteamVR_Input_Sources leftInputKeybinds = SteamVR_Input_Sources.LeftHand;

			public SteamVR_Action_Vector2 playerMovementThumbstick;
			public SteamVR_Action_Boolean playerJump;
			public SteamVR_Action_Boolean playerTurnLeft;
			public SteamVR_Action_Boolean playerTurnRight;


			/// Events

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
				playerTurnInput();
				playerLocomtionInput();
				playerJumpInput();
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

		}
	}
}
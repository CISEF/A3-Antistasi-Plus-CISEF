// In map template description.ext use:
// #include "MissionDescription\master.hpp"
// Whether order should be maintained is unknown.

#include "..\script_component.hpp"

author = "Sebaa (And all the people that built Antistasi)";
Keys[] = {"A3-Antistasi-is-not-available-in-single-player"};
KeysLimit = 2;  // Even if player tampers with his unlocked keys, this will never become true.
missionGroup = "AntistasiPlus";

#ifndef CUSTOM_A3A_CLASS
	class A3A {
		//used mainly to detect that the mission is a A3A mission, can also contain other data in the future
		version[] = {VERSION_AR};
	};
#endif

#include "debug.hpp"
#include "gameSettings.hpp"
#include "params.hpp"
#include "CfgRemoteExec.hpp"

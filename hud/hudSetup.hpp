#include "..\..\script_macros.hpp"

disableSerialization;

2 cutRsc["playerHUD", "PLAIN"];
[] call life_fnc_hudUpdate;

[] spawn
{
	private["_dam"];
	while {true} do
	{
		_dam = damage player;
		waitUntil {(damage player) != _dam};
		[] call life_fnc_hudUpdate;
	};
};
# SmiteESPAimbot
An ESP and Aimbot for Smite. Included is an SDK I generated &amp; reverse engineered the game for all game-hacking needs.  Version 3.24.3084.2

Working hacks included: 

-ESP

-Aimbot

Not included:
-Speed hack (Modify CheatEngine to make an UCE, and Modify the hook method for speedhack, write LUA Script, and use that)

Credits: x86asm, uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, poink, TheFeckless

Included in source files, credits to the original people who did massive reverse engineering work in Unreal3Engine.

Modifications from typical U3E games:

- ProcessEvent is not a virtual function.  Use a simple 5 BYTE JMP hook, rather than VMT hook.

- GObjObjects and GNames pointers in TArray are XOR'd by a key stored in the TLS.  Include TAntiCheatArray template to handle this.  As well as HackTools.h to get peb & xor key (Credits for getting the TEB of another thread go to poink)

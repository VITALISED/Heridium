# Heridium

Heridium is a library for No Man's Sky metadata classes (the ones from EXML/MBIN/MXML files). If you just want the headers
you should only need `pch.h` `heridium.h` and the `metadata` directory. However, this library supports the use of the cTkClassPointer methods
each metadata object has, just make sure "NMS.exe" is your module base if you want to use them.

If you need to update the metadata classes, inject the DLL provided in the `dumper` subproject before the game starts, it should automatically create 
a new `Binaries/HERIDIUM/metadata` folder in your No Man's Sky installation. If you're making a PR please map the new objects in `paths.h` where you think it belongs best.

This project is not a replacement for MBINCompiler, if you want to make .MBIN mods please use that instead. Heridium has also not been 
fully tested so sizes may not be perfectly accurate, please open an issue if you encounter any errors.

#pragma once
#ifdef WIN32
#	define ENGINE_EXPORT __declspec(dllexport)
#else
#	define ENGINE_EXPORT
#endif // WIN32

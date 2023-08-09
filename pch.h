// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#include "framework.h"

#include <spdlog/spdlog.h>
#include <fmt/format.h>
#include <MinHook.h>

#include "memory.h"
#include "hooks.h"
#include "common/utilities/spookyhash/SpookyV2.h"

#define HASH_SEED 0x72C085E2EE7C6F27 

#ifdef _MSC_VER
#define INLINE __forceinline
#else
#define INLINE inline
#endif

#endif //PCH_H


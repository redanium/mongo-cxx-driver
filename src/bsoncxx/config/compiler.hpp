// Copyright 2015 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#if defined(_MSC_VER)

// Disable MSVC warnings that cause a lot of noise related to DLL visibility
// for types that we don't control (like std::unique_ptr).
#pragma warning(push)
#pragma warning(disable : 4251 4275)

#define BSONCXX_INLINE inline __forceinline BSONCXX_PRIVATE

#define BSONCXX_CALL __cdecl

#else

#define BSONCXX_INLINE inline __attribute__((__always_inline__)) BSONCXX_PRIVATE

#define BSONCXX_CALL

#endif

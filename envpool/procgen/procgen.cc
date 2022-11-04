// Copyright 2021 Garena Online Private Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// clang-format off
#include "envpool/core/py_envpool.h"

#include "envpool/procgen/procgen.h"
// clang-format on
// generate python-side (raw) ProcgenEnvSpec
using ProcgenEnvSpec = PyEnvSpec<procgen::ProcgenEnvSpec>;
// generate python-side (raw) ProcgenEnvPool
using ProcgenEnvPool = PyEnvPool<procgen::ProcgenEnvPool>
// generate procgen.so
PYBIND11_MODULE(procgen_envpool, m) {
  REGISTER(m, ProcgenEnvSpec, ProcgenEnvPool)
}

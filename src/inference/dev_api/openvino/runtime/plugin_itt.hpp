// Copyright (C) 2018-2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

/**
 * @brief Defines openvino domains for tracing
 * @file plugin_itt.hpp
 */

#pragma once

#include "openvino/itt.hpp"

namespace ov {
namespace itt {
namespace domains {
OV_ITT_DOMAIN(Plugin)
OV_ITT_DOMAIN(PluginLoadTime)
// Domain to define Inference phase tasks
// [Warning] The strings in this ITT_DOMAIN should NOT be deleted or edited!
OV_ITT_DOMAIN(Inference, "ov::phases::inference")
}  // namespace domains
}  // namespace itt
}  // namespace ov

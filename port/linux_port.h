/* Copyright 2020-2023 Espressif Systems (Shanghai) CO LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <stdint.h>
#include "esp_loader_io.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    const char *device;
    uint32_t baudrate;
} loader_linux_config_t;

esp_loader_error_t loader_port_linux_init(const loader_linux_config_t *config);
void loader_port_deinit(void);

#ifdef __cplusplus
}
#endif

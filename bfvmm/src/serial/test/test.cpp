//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#include <test.h>

serial_ut::serial_ut()
{
}

bool
serial_ut::init()
{
    return true;
}

bool
serial_ut::fini()
{
    return true;
}

bool
serial_ut::list()
{
    this->test_serial_null_intrinsics();
    this->test_serial_success();
    this->test_serial_set_baud_rate_success();
    this->test_serial_set_baud_rate_unknown();
    this->test_serial_set_data_bits_success();
    this->test_serial_set_data_bits_success_extra_bits();
    this->test_serial_set_stop_bits_success();
    this->test_serial_set_stop_bits_success_extra_bits();
    this->test_serial_set_parity_bits_success();
    this->test_serial_set_parity_bits_success_extra_bits();
    this->test_serial_write_character();
    this->test_serial_write_string();

    return true;
}

int
main(int argc, char *argv[])
{
    return RUN_ALL_TESTS(serial_ut);
}

// =============================================================================
//
// ztd.vargs
// Copyright © 2021 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.vargs licenses may use this file
// in accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// 		http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================>

#ifndef ZTD_VARGS_SOURCE_STUB_HPP
#define ZTD_VARGS_SOURCE_STUB_HPP

#include <ztd/vargs/va_intrinsics.h>

#include <ztd/idk/assert.hpp>

#include <cstddef>
#include <cstdint>
#include <cstdlib>

extern "C" void __ztdc_va_start([[maybe_unused]] ztdc_va_list* __p_untyped_vl,
     [[maybe_unused]] void* __return_address) noexcept {
	std::abort();
}

extern "C" void* __ztdc_va_next([[maybe_unused]] ztdc_va_list* __p_vl,
     [[maybe_unused]] size_t __size, [[maybe_unused]] size_t __alignment,
     [[maybe_unused]] __ztdc_vargs_detail_broad_type __broad_type) noexcept {
	std::abort();
}

#endif // ZTD_VARGS_SOURCE_STUB_HPP

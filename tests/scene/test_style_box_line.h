/**************************************************************************/
/*  test_style_box_line.h                                                 */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef TEST_STYLE_BOX_LINE_H
#define TEST_STYLE_BOX_LINE_H

#include "scene/resources/style_box_line.h"

#include "thirdparty/doctest/doctest.h"

namespace TestStyleBoxLine {
    
    TEST_CASE("[StyleBoxLine] Default stylebox line") {
	// Default StyleBoxLine.
	Ref<StyleBoxLine> styleboxline = memnew(StyleBoxLine);

	CHECK_MESSAGE(
			styleboxline->get_color().is_equal_approx(Color(0, 0, 0, 1)),
			"Default StyleBoxLine should return the expected color when initialized.");
	CHECK_MESSAGE(
			styleboxline->get_thickness() == (1),
			"Default StyleBoxLine should be initialized with a thickness of 1.");
	CHECK_MESSAGE(
			styleboxline->is_vertical() == false,
			"Default StyleBoxLine should not be vertical on initialization.");
	CHECK_MESSAGE(
			styleboxline->get_grow_begin() == 1.0,
			"Default StyleBoxLine should have 1.0 pixel extend before the StyleBoxLine's bounds.");
	CHECK_MESSAGE(
			styleboxline->get_grow_end() == 1.0,
			"Default StyleBoxLine should have 1.0 pixel extend past the StyleBoxLine's bounds.");
}

} // namespace TestStyleBoxLine

#endif // TEST_STYLE_BOX_LINE_H

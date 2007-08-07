/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Math.h"

#include <decaf/lang/Double.h>
#include <decaf/lang/Float.h>
#include <decaf/lang/Integer.h>
#include <decaf/lang/Long.h>

using namespace decaf;
using namespace decaf::lang;

#include <cmath>
#include <cstdlib>

////////////////////////////////////////////////////////////////////////////////
const double Math::E = 2.718281828459045;
const double Math::PI = 3.141592653589793;

////////////////////////////////////////////////////////////////////////////////
double Math::log( double value ) {

    if( value != value || value < 0.0 ) {
        return Double::NaN;
    } else if( value == Double::POSITIVE_INFINITY ) {
        return Double::POSITIVE_INFINITY;
    } else if( value == 0.0 || value == -0.0 ) {
        return Double::NEGATIVE_INFINITY;
    }

    return std::log( value );
}

////////////////////////////////////////////////////////////////////////////////
double Math::ceil( double value ) {

    if( Double::isNaN( value ) || Double::isInfinite( value ) ) {
        return value;
    } else if( value == 0.0 || value == -0.0 ) {
        return value;
    } else if( -1.0 <= value <= 0.0 ) {
        return -0.0;
    }

    return std::ceil( value );
}

////////////////////////////////////////////////////////////////////////////////
double Math::floor( double value ) {

    if( Double::isNaN( value ) || Double::isInfinite( value ) ) {
        return value;
    } else if( value == 0.0 || value == -0.0 ) {
        return value;
    }

    return std::floor( value );
}


//          Copyright Joakim Karlsson & Kim Gräsman 2010-2012.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef IGLOO_IGLOO_FRAMEWORK_H
#define IGLOO_IGLOO_FRAMEWORK_H

#define IGLOO_VERSION "1.0.0"

#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <stack>
#include <list>
#include <memory>
#include <algorithm>

#include <igloo/external/snowhouse/snowhouse/snowhouse.h>

namespace igloo {
  using namespace snowhouse;
}

#include <igloo/core/core.h>

typedef igloo::ContextWithAttribute<void> IGLOO_CURRENT_CONTEXT;


#endif

#pragma once

#include <iosfwd>

#include <libstud/regex/regex.hxx>
#include <libstud/regex/export.hxx>

namespace stud
{
  namespace regex
  {
    // Print regex error description.
    //
    LIBSTUD_REGEX_SYMEXPORT std::ostream&
    operator<< (std::ostream&, const regex_error&);
  }
}

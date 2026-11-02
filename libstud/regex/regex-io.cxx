#include <libstud/regex/regex-io.hxx>

#include <ostream>

namespace stud
{
  namespace regex
  {
    std::ostream&
    operator<< (std::ostream& o, const regex_error& e)
    {
      o << e.what ();
      return o;
    }
  }
}

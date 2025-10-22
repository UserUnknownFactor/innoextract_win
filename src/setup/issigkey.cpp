#include "setup/issigkey.hpp"
#include "setup/info.hpp"
#include "util/load.hpp"

namespace setup {

void issig_key_entry::load(std::istream & is, const info & i) {
    is >> util::encoded_string(public_x, i.codepage);
    is >> util::encoded_string(public_y, i.codepage);
    is >> util::encoded_string(runtime_id, i.codepage);
}

} // namespace setup
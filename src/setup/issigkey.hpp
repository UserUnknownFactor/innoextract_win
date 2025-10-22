#ifndef INNOEXTRACT_SETUP_ISSIGKEY_HPP
#define INNOEXTRACT_SETUP_ISSIGKEY_HPP

#include <string>
#include <iosfwd>

namespace setup {

struct info;

struct issig_key_entry {
    std::string public_x;
    std::string public_y;
    std::string runtime_id;
    
    void load(std::istream & is, const info & i);
};

} // namespace setup

#endif // INNOEXTRACT_SETUP_ISSIGKEY_HPP
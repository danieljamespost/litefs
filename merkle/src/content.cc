#include "merkle/content.h"
#include "merkle/hash.h"

Content::Content(std::string path)
{
    _path = path;
    _hash = Hash(_path);
}

std::string Content::calculateHash() {
    // if (!_digest.empty()) {
    // 	return _digest;
    // }
    // _digest = _hash.file(_path);
    // return _digest;

    _hash.final();
    return _hash.final();
}
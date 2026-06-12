#include <mimalloc-new-delete.h>

#include <mimalloc.h>

namespace ruvia::detail {

void ensureMimallocGlobalOverrideLinked() noexcept {
    // Keep this TU linked so mimalloc owns global new/delete and Windows imports it early.
    (void)mi_version();
}

}  // namespace ruvia::detail

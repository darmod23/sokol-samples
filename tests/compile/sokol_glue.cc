#define SOKOL_IMPL
#define SOKOL_WIN32_FORCE_MAIN
// FIXME: get rid of sokol_app.h dependency!
#include "sokol_app.h"
#include "sokol_gfx.h"
#include "sokol_glue.h"

sapp_desc sokol_main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    return sapp_desc{};
}

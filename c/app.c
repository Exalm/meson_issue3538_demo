#include <glib.h>
#include <gmodule.h>

typedef int (*module_func)(void);

#define MODULE_LIB "libapp_module.so"

int app_func () {
  return 41;
}

int main (int argc, char **argv) {
  GModule *module;
  gpointer func;
  module_func mfunc;

  module = g_module_open (MODULE_LIB, G_MODULE_BIND_LAZY);
  g_module_symbol (module, "module_func", &func);
  mfunc = (module_func) func;

  g_print ("%d\n", mfunc ());

  return 0;
}

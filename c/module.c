extern int app_func();

int module_func () {
  return app_func() + 1;
}

project ('test', ['c'], version: '0.1')

deps = [
  dependency ('glib-2.0'),
  dependency ('gmodule-2.0'),
]

app = executable (
  'app',
  ['app.c'],
  dependencies: deps,
  export_dynamic: true
)

shared_module (
  'app_module',
  ['module.c'],
  link_with: app
)

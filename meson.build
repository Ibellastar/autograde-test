project('Multiplier', 'c',
  version: '0.1',
  default_options: [
    'c_std=c99',
    'warning_level=3',
  ]
)

unity_subproject = subproject('unity')
unity_dependency = unity_subproject.get_variable('unity_dep')
unity_gen_runner = unity_subproject.get_variable('gen_test_runner')

inc = include_directories('src')

test1_1 = executable('multiplier_test',
  sources: [
    files([
      'src' / 'multiplier.c',
      'test' / 'multiplier_test.c',
    ]),
    unity_gen_runner.process('test' / 'multiplier_test.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('multiplier.c', test1_1)
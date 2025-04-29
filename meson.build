project('Tip Calculator', 'c',
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

test1_1 = executable('1.1-TestTipCalculator_CalculateTip',
  sources: [
    files([
      'src' / '1-TipCalculator.c',
      'test' / '1.1-TestTipCalculator_CalculateTip.c',
    ]),
    unity_gen_runner.process('test' / '1.1-TestTipCalculator_CalculateTip.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('1.1 Tip Calculator - CalulateTip', test1_1)

test1_2 = executable('1.2-TestTipCalculator_CalculateTotal',
  sources: [
    files([
      'src' / '1-TipCalculator.c',
      'test' / '1.2-TestTipCalculator_CalculateTotal.c',
    ]),
    unity_gen_runner.process('test' / '1.2-TestTipCalculator_CalculateTotal.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('1.2 Tip Calculator - CalculateTotal', test1_2)

test2_1 = executable('2.1-TestTempConverter_ConvertFToC',
  sources: [
    files([
      'src' / '2-TempConverter.c',
      'test' / '2.1-TestTempConverter_ConvertFToC.c',
    ]),
    unity_gen_runner.process('test' / '2.1-TestTempConverter_ConvertFToC.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('2.1 Temp Converter - ConvertFToC', test2_1)

test2_2 = executable('2.2-TempConverter_ConvertCToF',
  sources: [
    files([
      'src' / '2-TempConverter.c',
      'test' / '2.2-TestTempConverter_ConvertCToF.c',
    ]),
    unity_gen_runner.process('test' / '2.2-TestTempConverter_ConvertCToF.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('2.2 Temp Converter - ConvertCToF', test2_2)

test3_1 = executable('3.1-TestGeometry_AreaOfTriangle',
  sources: [
    files([
      'src' / '3-Geometry.c',
      'test' / '3.1-TestGeometry_AreaOfTriangle.c',
    ]),
    unity_gen_runner.process('test' / '3.1-TestGeometry_AreaOfTriangle.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('3.1 Geometry - AreaOfTriangle', test3_1)

test3_2 = executable('3.2-TestGeometry_AreaOfCircle',
  sources: [
    files([
      'src' / '3-Geometry.c',
      'test' / '3.2-TestGeometry_AreaOfCircle.c',
    ]),
    unity_gen_runner.process('test' / '3.2-TestGeometry_AreaOfCircle.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('3.2 Geometry - AreaOfCircle', test3_2)

test3_3 = executable('3.3-TestGeometry_PerimeterOfCircle',
  sources: [
    files([
      'src' / '3-Geometry.c',
      'test' / '3.3-TestGeometry_PerimeterOfCircle.c',
    ]),
    unity_gen_runner.process('test' / '3.3-TestGeometry_PerimeterOfCircle.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('3.3 Geometry - PerimeterOfCircle', test3_3)

test4_1 = executable('4.1-StringConversion_ToUpper',
  sources: [
    files([
      'src' / '4-StringConversion.c',
      'test' / '4.1-TestStringConversion_ToUpper.c',
    ]),
    unity_gen_runner.process('test' / '4.1-TestStringConversion_ToUpper.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('4.1 StringConversion - ToUpper', test4_1)

test4_2 = executable('4.2-StringConversion_Capitalize',
  sources: [
    files([
      'src' / '4-StringConversion.c',
      'test' / '4.2-TestStringConversion_Capitalize.c',
    ]),
    unity_gen_runner.process('test' / '4.2-TestStringConversion_Capitalize.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('4.2 StringConversion - Capitalize', test4_2)

test4_3 = executable('4.3-StringConversion_AddStrings',
  sources: [
    files([
      'src' / '4-StringConversion.c',
      'test' / '4.3-TestStringConversion_AddStrings.c',
    ]),
    unity_gen_runner.process('test' / '4.3-TestStringConversion_AddStrings.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)

test('4.3 StringConversion - AddStrings', test4_3)
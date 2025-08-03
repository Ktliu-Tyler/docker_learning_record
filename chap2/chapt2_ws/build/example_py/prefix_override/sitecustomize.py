import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/d2lros2/chap2/chapt2_ws/install/example_py'

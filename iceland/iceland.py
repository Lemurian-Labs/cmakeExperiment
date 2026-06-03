import sys
import os

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'build', 'lib'))

import iceland_bindings

print(iceland_bindings.greet_sweden(0))
print(iceland_bindings.greet_denmark(0))

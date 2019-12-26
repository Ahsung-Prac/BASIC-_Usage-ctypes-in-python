from ctypes import cdll
lib = cdll.LoadLibrary('./libctypes.so')

class A():
    def __init__(self):
        self.obj = lib.make_A()

    def hello(self):
        lib.hello(self.obj)

test = A()
test.hello();
lib.show();

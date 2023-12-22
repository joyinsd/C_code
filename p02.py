class Person:
    def __init__(self):
        self.name = input('name: ')
        self.age = int(input('age: '))

    def disp(self):
        print(self.name + ':' + str(self.age))


li = []
for i in range(3):
    li.append(Person())
for i in li:
    i.disp()

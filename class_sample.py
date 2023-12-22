class Monster:
    def __init__(self, name):
        self.name = name

    def say(self):
        print(f"I am {self.name}")


shark = Monster("shark")
shark.say()

wolf = Monster("wolf")
wolf.say()
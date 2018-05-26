from os import listdir
from re import match

class Entry():
    def __init__(self, contest, task):

        self.contest = contest
        self.task = task

    def __eq__(self, other):

        if self.__str__() == other:
            return True
        else:
            return False

    def __lt__(self, other):

        if (self.contest < other.contest) or ((self.contest == other.contest) and self.task > other.task):
            return True
        else:
            return False

    def __hash__(self):

        return hash(self.__str__())

    def __str__(self):

        return "* solved Task [%s-%s](http://codeforces.ru/contest/%s/problem/%s)" % (self.contest, self.task, self.contest, self.task)

def main():

    PATH = "src/contests"

    LOGS = []

    for contest in listdir(PATH):
        if match("[0-9]+", contest) is not None:

            for task in listdir(PATH + "/" + contest):
                if match("[A-Z].cpp", task) is not None:
                    LOGS.append(Entry(contest, task[:-4]))

    LOGS = list(set(LOGS) - set([x.strip() for x in list(open("tools/recentsolved", "r"))]))

    LOGS.sort(reverse=True)

    for task in LOGS:
        print(task)

if __name__ == "__main__":
    main()

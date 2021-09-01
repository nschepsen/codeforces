#!/usr/bin/python3

from sys import argv, exit
from os  import system, path

from time import time

from subprocess import Popen, PIPE

def compare(out, answer):

    for(a, b) in zip(out, answer):

        if a != b:

            return 'WRONG (Expected: %s -> Got: %s)' % (repr(b), repr(a))

    return 'OK'

def main():

    if len(argv) != 3:

        exit('Usage: python3 %s <CONTEST> <TASK>' % (argv[0]))

    contest = int(argv[1])
    task = argv[2] # e.g. [A-Z]

    testcase = 0 # Number of the TC

    while True:

        testcase += 1

        pattern = '../src/live/%3d/%s.%d' % (contest, task, testcase)

        if path.isfile(pattern + '.out'):

            ans = open(pattern + '.out', 'r').read()

            ts = time()

            ret = Popen(['./T%04d%s' % (contest, task)], stdin=open(pattern + '.in', 'r'), stdout=PIPE, shell=True)
            out = ret.communicate()[0].decode()

            te = time()

            print('# T%04d%s # %d: %s %s (%.2f ms)' % (contest, task, testcase, 10 * '.', compare(out, ans), (te - ts) * 1000))

        else:

            break

if __name__ == '__main__':
	main()

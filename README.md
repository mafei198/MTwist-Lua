A lua wraper for [Mersenne Twist Pseudorandom Number Generator Package](http://fmg-www.cs.ucla.edu/geoff/mtwist.html) Version 1.5

###Install

####For MacOS
	run `make` command at the root of this project.

####For Linux
	run `make linux` command at the root of this project.

###Usage

	require "mtwist"
	mtwist.seed(os.time())
	mtwist.rand()
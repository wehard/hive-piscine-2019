#!/bin/sh
git ls-files $(git rev-parse --show-toplevel) -o --ignored --exclude-standard

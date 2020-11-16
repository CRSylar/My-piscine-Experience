find . -type f -name '*.sh' | rev | cut -b 4- | cut -d / -f 1 | rev

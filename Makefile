CFLAGS = -Wall
FILES = main
PROJECT_NAME = reddit-179-roguelike

all: $(FILES)

clean:
	rm -f $(FILES) *.zip

zip: clean
	zip -r $(PROJECT_NAME).zip .

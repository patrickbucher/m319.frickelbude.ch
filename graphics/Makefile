.PHONY: all clean

all: geometry.svg rect-split.svg enclosing.svg

.SUFFIXES: .pdf .svg
.pdf.svg:
	pdf2svg $< $@

.SUFFIXES: .latex .pdf
.latex.pdf:
	xelatex $<

clean:
	rm -f *.log *.aux

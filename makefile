default:
	python3 generator/generator.py

tidy:
	flake8
	find . -name *.h | xargs clang-format -i
	find . -name *.cpp | xargs clang-format -i

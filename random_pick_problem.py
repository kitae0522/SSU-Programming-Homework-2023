import os
import json
import random


class Problem:
    def __init__(self):
        self.problem_title = None
        self.problem_path = None

    def __iter__(self):
        yield self.problem_title
        yield self.problem_path

    def set_problem_title(self, _title):
        self.problem_title = _title

    def set_problem_path(self, _path):
        self.problem_path = _path


class ProblemBuilder:
    def __init__(self):
        self.problem = Problem()

    def add_title(self, _title):
        self.problem.set_problem_title(_title)
        return self

    def add_path(self, _path):
        self.problem.set_problem_path(_path)
        return self

    def build(self):
        return self.problem


if __name__ == '__main__':
    problem_set = []
    with open(f"{os.getcwd()}/problem.json", "r", encoding="utf-8") as json_file:
        problem_data = json.load(json_file)
        for problem in problem_data:
            problem_set.append(
                ProblemBuilder() \
                    .add_title(problem["title"]) \
                    .add_path(problem["path"]) \
                    .build()
            )
    pick_problem_title, pick_problem_path = random.choice(problem_set)
    print(
        f"| {pick_problem_title} 문제를 풀어보세요.\n" +
        f"| {pick_problem_path[1:]}/README.md\n"
    )

    with open(f"{os.getcwd()}{pick_problem_path[1::]}/README.md", "r", encoding="utf-8") as readme_file:
        lines = readme_file.readlines()
        for line in lines:
            print(line.strip())

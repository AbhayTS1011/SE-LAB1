"""Simple linear regression example using height and weight."""

import matplotlib.pyplot as plt
from sklearn import linear_model


def main():
    """Train a linear regression model and predict weight."""
    height = [[4.0], [5.0], [6.0], [7.0], [8.0], [9.0], [10.0]]
    weight = [8, 10, 12, 14, 16, 18, 20]

    plt.scatter(height, weight, color="black")
    plt.xlabel("height")
    plt.ylabel("weight")

    model = linear_model.LinearRegression()
    model.fit(height, weight)

    x_height = [[12.0]]
    print(model.predict(x_height))


if __name__ == "__main__":
    main()
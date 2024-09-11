from numpy import array, linalg


def main():
    variant = int(input())
    Matrix_left = array([[0., 0., 0., 1], [1., 1., 1., 1.], [8., 4., 2., 1], [27., 9., 3., 1]])
    Matrix_right = array([variant, variant + 1, variant + 8, variant + 27])

    koeff = linalg.solve(Matrix_left, Matrix_right)
    for i in (range(0, 3, 1)):
        answer = koeff[0] * ((i+0.5)**3) + koeff[1] * ((i+0.5)**2) + koeff[2] * (i+0.5) + koeff[3]
        print(f"P_n({i+0.5}) = {answer}")


main()

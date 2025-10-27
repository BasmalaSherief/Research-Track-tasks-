#!/usr/bin/python3
import turtle
import math

angle = float(input("Enter the rotation angle (degrees): "))
scale = float(input("Enter a positive real number less than 3 (scale factor): "))

width = 30
height = 70
num_rectangles = 3

screen = turtle.Screen()
screen.title("Rotated and Scaled Rectangles")

t = turtle.Turtle()
t.speed(2)

def draw_rectangle(t, width, height):
    for _ in range(2):
        t.forward(width)
        t.right(90)
        t.forward(height)
        t.right(90)

for i in range(num_rectangles):
    draw_rectangle(t, width, height)
    width *= scale
    height *= scale
    t.left(angle)  

turtle.done()

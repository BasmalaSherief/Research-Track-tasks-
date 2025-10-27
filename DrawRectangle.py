#!/usr/bin/python3
import turtle

base = float(input("Enter the base (width) of the rectangle: "))
height = float(input("Enter the height of the rectangle: "))

screen = turtle.Screen()
screen.title("Centered Rectangle")

t = turtle.Turtle()
t.speed(1)  


t.penup()
t.goto(-base/2, -height/2)
t.pendown()

for _ in range(2):
    t.forward(base)  
    t.left(90)
    t.forward(height) 
    t.left(90)

t.penup()
t.goto(0, 0)
t.setheading(0) 

turtle.done()

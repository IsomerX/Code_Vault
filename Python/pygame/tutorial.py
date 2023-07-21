<<<<<<< HEAD
import sys, pygame
import math
 
import pygame as pygame

pygame.init()

WHITE = (255, 255, 255)

class Car(pygame.sprite.Sprite):
    
    def __init__(self, color, width, height):
        super().__init__()
        
        self.image = pygame.Surface([width, height])
        self.image.fill(WHITE)
        self.image.set_colorkey(WHITE)

        self.image = pygame.image.load("king.png")
        self.image = pygame.transform.scale(self.image, (64,64))


        # pygame.draw.rect(self.image, color, [0, 0, width, height])
        # Fetch the rectangle object that has the dimensions of the image.
        self.rect = self.image.get_rect()

size = width, height = 512, 512
white = 204, 51, 255
black = 255, 102, 204
hightlight = 192, 192, 192
title = "Sanya's Chess"
 
all_sprites_list = pygame.sprite.Group()
k = Car(WHITE, 200, 200)

k.rect.x = 0
k.rect.y = 0

all_sprites_list.add(k)

width = 64 # width of the square
original_color = ''
 
screen = pygame.display.set_mode(size)
pygame.display.set_caption(title)
 
rect_list = list() # this is the list of brown rectangle
rect_list2 = list()

# used this loop to create a list of brown rectangles
for i in range(0, 8): # control the row
    for j in range(0, 8): # control the column
        if i % 2 == 0: # which means it is an even row
            if j % 2 != 0: # which means it is an odd column
                rect_list.append(pygame.Rect(j * 64, i * 64, 64, 64))
        else:
            if j % 2 == 0: # which means it is an even column
                rect_list.append(pygame.Rect(j * 64, i * 64, 64, 64))
 
 
# create main surface and fill the base color with light brown color
chess_board_surface = pygame.Surface(size)
chess_board_surface.fill(white)
 
# next draws the dark brown rectangles on the chess board surface
for chess_rect in rect_list:
    pygame.draw.rect(chess_board_surface, black, chess_rect)
 
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT: sys.exit()
        elif event.type == pygame.MOUSEBUTTONDOWN:
            pos = event.pos
            x = math.floor(pos[0] / width)
            y = math.floor(pos[1] / width)
            original_color = chess_board_surface.get_at((x * width, y * width ))
            pygame.draw.rect(chess_board_surface, hightlight, pygame.Rect((x) * width, (y) * width, 64, 64))
            print(x, y)
        elif event.type == pygame.MOUSEBUTTONUP:
            pos = event.pos
            x = math.floor(pos[0] / width)
            y = math.floor(pos[1] / width)
            pygame.draw.rect(chess_board_surface, original_color, pygame.Rect((x) * width, (y) * width, 64, 64))
    

    all_sprites_list.update()
    screen.blit(chess_board_surface, (0, 0))
    all_sprites_list.draw(screen)
=======
import sys, pygame
import math
 
import pygame as pygame

pygame.init()

WHITE = (255, 255, 255)

class Car(pygame.sprite.Sprite):
    
    def __init__(self, color, width, height):
        super().__init__()
        
        self.image = pygame.Surface([width, height])
        self.image.fill(WHITE)
        self.image.set_colorkey(WHITE)

        self.image = pygame.image.load("king.png")
        self.image = pygame.transform.scale(self.image, (64,64))


        # pygame.draw.rect(self.image, color, [0, 0, width, height])
        # Fetch the rectangle object that has the dimensions of the image.
        self.rect = self.image.get_rect()

size = width, height = 512, 512
white = 204, 51, 255
black = 255, 102, 204
hightlight = 192, 192, 192
title = "Sanya's Chess"
 
all_sprites_list = pygame.sprite.Group()
k = Car(WHITE, 200, 200)

k.rect.x = 0
k.rect.y = 0

all_sprites_list.add(k)

width = 64 # width of the square
original_color = ''
 
screen = pygame.display.set_mode(size)
pygame.display.set_caption(title)
 
rect_list = list() # this is the list of brown rectangle
rect_list2 = list()

# used this loop to create a list of brown rectangles
for i in range(0, 8): # control the row
    for j in range(0, 8): # control the column
        if i % 2 == 0: # which means it is an even row
            if j % 2 != 0: # which means it is an odd column
                rect_list.append(pygame.Rect(j * 64, i * 64, 64, 64))
        else:
            if j % 2 == 0: # which means it is an even column
                rect_list.append(pygame.Rect(j * 64, i * 64, 64, 64))
 
 
# create main surface and fill the base color with light brown color
chess_board_surface = pygame.Surface(size)
chess_board_surface.fill(white)
 
# next draws the dark brown rectangles on the chess board surface
for chess_rect in rect_list:
    pygame.draw.rect(chess_board_surface, black, chess_rect)
 
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT: sys.exit()
        elif event.type == pygame.MOUSEBUTTONDOWN:
            pos = event.pos
            x = math.floor(pos[0] / width)
            y = math.floor(pos[1] / width)
            original_color = chess_board_surface.get_at((x * width, y * width ))
            pygame.draw.rect(chess_board_surface, hightlight, pygame.Rect((x) * width, (y) * width, 64, 64))
            print(x, y)
        elif event.type == pygame.MOUSEBUTTONUP:
            pos = event.pos
            x = math.floor(pos[0] / width)
            y = math.floor(pos[1] / width)
            pygame.draw.rect(chess_board_surface, original_color, pygame.Rect((x) * width, (y) * width, 64, 64))
    

    all_sprites_list.update()
    screen.blit(chess_board_surface, (0, 0))
    all_sprites_list.draw(screen)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    pygame.display.update()
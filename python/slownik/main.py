slownik = {'krowa' : 'cow', 'kot' : 'cat', 'jan' : 'john'}

while True:
	slowo = input("wprowadz slowo: ")
	if slowo == "koniec":
		break
	if slowo in slownik:
		print("odpowiedz: "{slownik[slowo]})
	else:
		print("nie znaleziono takiego slowa")

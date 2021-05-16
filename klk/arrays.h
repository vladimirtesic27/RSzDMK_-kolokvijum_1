/*
 * Element-deklarisemo f-ju koja izracunava vrednost n-tog clana geometrijskog niza opisanog
 * pomocu pocetne vr. niza i odnosa susednih elemenata.
 *@param first_element -prvi element
 *@param  ratio- ratio parametar
 *      Created on: 16.05.2021.
 *      Author: Vladimir Tesic
 */

int16_t Element(int16_t first_element, int16_t ratio, int16_t n);

/**
 * Sum-deklarisemo F-ju Sum koja izracunava sumu prvih n clanova geo. niza.
 * @param n - Koliko clanova zelimo da saberemo
 * @param mode- koji mod zelimo
 * @return vrednost sume n clanova geometrisjkog niza
 *
 */

 void Sum(int16_t first_element, int16_t ratio, int16_t n,int8_t mode);

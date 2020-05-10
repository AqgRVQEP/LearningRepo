

l1_value = 0.75
l1_value_diamond = 8

l1_to_l3 = 12
l1_to_l3_gold = 0.39
l1_to_l3_vit = 10

l3_to_l4 = 16
l3_to_l4_gold = 0.897
l3_to_l4_vit = 10
l3_to_l4_rate = 0.4878

l4_to_l6 = 12
l4_to_l6_gold = 19.75
l4_to_l6_vit = 10

diamond = 0.05
vit = 1

def l6(n):
    l4 = (l4_to_l6 + 1) * n
    gold = l4_to_l6_gold * n + (l4 / l3_to_l4_rate) * l3_to_l4_gold + (l4 / l3_to_l4_rate) * l1_to_l3_gold
    l1 = (l4 / l3_to_l4_rate) * l3_to_l4 + (l4 / l3_to_l4_rate) * (l1_to_l3 + 1) 
    print(gold)
    print(l1)
    diamond_gold = l1 * diamond
    vit_gold = l4_to_l6_vit * n + l4 * l3_to_l4_vit + (l4 / l3_to_l4_rate) * l1_to_l3_vit
    print(vit_gold)
    golds = gold + l1 * l1_value + diamond_gold + vit_gold
    print(golds)

l6(1)

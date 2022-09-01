from cmath import pi

rider_force = input("enter rider force in lbs: ")
rider_force = int(rider_force)
crank_arm_length = input("enter crank arm length in mm: ")
crank_arm_length = int(crank_arm_length)
stress = input("enter stress in psi: ")
stress = int(stress)

crank_arm_length = crank_arm_length / 25.4
r_3 = ((crank_arm_length*rider_force)/(pi*stress))
r = r_3 ** (1./3.)
print(r)

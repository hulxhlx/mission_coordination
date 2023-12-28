# Mission_coordination_project

Connect to [RDS](https://app.theconstructsim.com/#/) with your logins.

Go to "My rosjects" and run the project that you created.

## Step 4: Move one robot to the corresponding flag

In one terminal


```bash
roslaunch evry_project_strategy agent.launch nbr_robot:=1
```


In another terminal


```bash
roslaunch evry_project_description simu_robot.launch
```
video: https://drive.google.com/file/d/1M4WpFOqE1JHizNKSihLUdtRfuf2CevgH/view?usp=sharing

## Step 5: Implementation of one strategy - timing solution

In one terminal


```bash
roslaunch evry_project_strategy timming.launch 
```

In another terminal


```bash
roslaunch evry_project_description simu_robot.launch
```
video: https://drive.google.com/file/d/1t78-t0IPy_jIVsel3k4anW6tPds8SxlC/view?usp=sharing

## Lab2.1

In one terminal


```bash
roslaunch evry_project_description simu_robot.launch
```


In another terminal


```bash
roslaunch evry_project_strategy strategy1.launch
```
video: https://drive.google.com/file/d/1g_R3snpDz9QrXWknSiSHSsTD89WLrsih/view?usp=sharing

## Bonus

For the source code and description, see another branch.

video: https://drive.google.com/file/d/1JyWD92i0nWth7-p0ABjDmh4ecLbaXTf_/view?usp=sharing
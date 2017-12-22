from .models import User, Interest, Group, UsersGroup, Attendence, GroupInterest, Material, GroupPlc
from rest_framework.serializers import ModelSerializer


class UserSerializer(ModelSerializer):
    def create(self, validated_data):
        password = validated_data.pop('password', None)
        instance = self.Meta.model(**validated_data)
        if password is not None:
            instance.set_password(password)
        instance.save()
        return instance

    class Meta:
        model = User
        fields = ['user_id', 'phone_number', 'introduction']


class InterestSerializer(ModelSerializer):
    class Meta:
        model = Interest
        fields = '__all__'


class GroupSerializer(ModelSerializer):
    class Meta:
        model = Group
        fields = '__all__'


class UsersGroupSerializer(ModelSerializer):
    class Meta:
        model = UsersGroup
        fields = '__all__'


class AttendenceSerializer(ModelSerializer):
    class Meta:
        model = Attendence
        fields = '__all__'


class GroupInterestSerializer(ModelSerializer):
    class Meta:
        model = GroupInterest
        fields = '__all__'


class MaterialSerializer(ModelSerializer):
    class Meta:
        model = Material
        fields = '__all__'


class GroupPlcSerializer(ModelSerializer):
    class Meta:
        model = GroupPlc
        fields = '__all__'